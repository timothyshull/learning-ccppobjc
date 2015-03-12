//
//  main.m
//  CAStreamFormatTester
//
//  Created by Tim on 12/26/14.
//  Copyright (c) 2014 Tim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

int main(int argc, const char * argv[]) {
	@autoreleasepool {
		AudioFileTypeAndFormatID fileTypeAndFormat;
		fileTypeAndFormat.mFileType = kAudioFileAIFFType;
		fileTypeAndFormat.mFormatID = kAudioFormatLinearPCM;
		
		OSStatus audioErr = noErr;
		UInt32 infoSize = 0;
		
		audioErr = AudioFileGetGlobalInfoSize (kAudioFileGlobalInfo_AvailableStreamDescriptionsForFormat, sizeof (fileTypeAndFormat), &fileTypeAndFormat, &infoSize);
		assert (audioErr == noErr);
		
		AudioStreamBasicDescription *asbds = malloc (infoSize);
		audioErr = AudioFileGetGlobalInfo (kAudioFileGlobalInfo_AvailableStreamDescriptionsForFormat, sizeof (fileTypeAndFormat), &fileTypeAndFormat, &infoSize, asbds);
		assert (audioErr == noErr);
		
		int asbdCount = infoSize / sizeof (AudioStreamBasicDescription);
		
		
		for (int i=0; i<asbdCount; i++) {
			UInt32 format4cc = CFSwapInt32HostToBig(asbds[i].mFormatID);
			NSLog (@"%d: mFormatId: %4.4s, mFormatFlags: %d, mBitsPerChannel: %d", i, (char*)&format4cc, asbds[i].mFormatFlags, asbds[i].mBitsPerChannel);
			}
	}
	return 0;
}
