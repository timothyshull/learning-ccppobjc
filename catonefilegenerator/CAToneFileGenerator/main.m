//
//  main.m
//  CAToneFileGenerator
//
//  Created by Tim on 12/1/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

#define SAMPLE_RATE 44100
#define DURATION 5.0
#define FILENAME_FORMAT @"%0.3f-square.aif"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        if (argc < 2) {
            printf("Usage: CAToneFileGenerator n\n(where n is tone in Hz)");
            return -1;
        }
        
        double hz = atof(argv[1]);
        assert (hz > 0);
        NSLog (@"Generating %f hz tone", hz);
        
        NSString *fileName = [NSString stringWithFormat:FILENAME_FORMAT, hz];
        NSString *filePath = [[[NSFileManager defaultManager] currentDirectoryPath] stringByAppendingPathComponent: fileName];
        NSURL *fileURL = [NSURL fileURLWithPath: filePath];
//        CFURLRef cfFileURL = (__bridge CFURLRef)fileURL;
        
        AudioStreamBasicDescription asbd;
        memset(&asbd, 0, sizeof(asbd));
        asbd.mSampleRate = SAMPLE_RATE;
        asbd.mFormatFlags = kAudioFormatFlagIsBigEndian | kAudioFormatFlagIsSignedInteger | kAudioFormatFlagIsPacked;
        asbd.mBitsPerChannel = 16;
        asbd.mChannelsPerFrame = 1;
        asbd.mFramesPerPacket = 1;
        asbd.mBytesPerFrame = 2;
        asbd.mFramesPerPacket = 2;
        
        AudioFileID audioFile;
        OSStatus audioErr = noErr;
        audioErr = AudioFileCreateWithURL((__bridge CFURLRef)fileURL, kAudioFileAIFFType, &asbd, kAudioFileFlags_EraseFile, &audioFile);
        assert(audioErr == noErr);
        
        long maxSampleCount = SAMPLE_RATE * DURATION;
        long sampleCount = 0;
        UInt32 bytesToWrite = 2;
        double wavelengthInSamples = SAMPLE_RATE / hz;
        
        while (sampleCount < maxSampleCount) {
            for (int i = 0; i < wavelengthInSamples; i++) {
                SInt16 sample;
                if (i < wavelengthInSamples / 2) {
                    sample = CFSwapInt16HostToBig(SHRT_MAX);
                }
                else {
                    sample = CFSwapInt16HostToBig(SHRT_MIN);
                }
                audioErr = AudioFileWriteBytes(audioFile, false, sampleCount * 2, &bytesToWrite, &sample);
                assert(audioErr == noErr);
                sampleCount++;
            }
        }
        audioErr = AudioFileClose(audioFile);
        assert(audioErr == noErr);
        NSLog (@"Wrote %ld samples", sampleCount);
    }
    return 0;
}
