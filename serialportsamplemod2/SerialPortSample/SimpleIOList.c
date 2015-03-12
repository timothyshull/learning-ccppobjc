#include <IOKit/IOKitLib.h>
#include <IOKit/hid/IOHIDLib.h>

#define CheckIOReturn(ioreturn)                                                                \
if (ioreturn != kIOReturnSuccess)                                                          \
{                                                                                          \
fprintf(stderr, "IO error: %u (%s, line %u)", (unsigned)ioreturn, __FILE__, __LINE__); \
}

#define CheckNULL(pointer)                                                         \
if (pointer == NULL)                                                           \
{                                                                              \
fprintf(stderr, "%s is NULL (%s, line %u)", #pointer, __FILE__, __LINE__); \
}

int main(int argc, char const * argv[])
{
    IOReturn error;
    
    mach_port_t ioMasterPort;
    error = IOMasterPort(MACH_PORT_NULL, &ioMasterPort);
    CheckIOReturn(error);
    
    CFDictionaryRef matchingDictionary;
    matchingDictionary = IOServiceMatching("IOAudioStream");
    CheckNULL(matchingDictionary);
    
    io_iterator_t ioIterator;
    error = IOServiceGetMatchingServices(ioMasterPort, matchingDictionary, &ioIterator);
    CheckIOReturn(error);
    
    io_object_t ioObject = IOIteratorNext(ioIterator);
    while (ioObject != 0)
    {
        io_name_t ioObjectName;
        error = IOObjectGetClass(ioObject, ioObjectName);
        
        printf("Object: %s\n", ioObjectName);
        
        ioObject = IOIteratorNext(ioIterator);
    }
    
    error = IOObjectRelease(ioIterator);
    CheckIOReturn(error);
    
    return EXIT_SUCCESS;
}