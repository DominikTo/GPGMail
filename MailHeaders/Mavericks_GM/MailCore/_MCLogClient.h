/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface _MCLogClient : NSObject
{
    int _fileDescriptor;
    struct __aslclient *_aslClient;
}

@property(readonly) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(readonly) struct __aslclient *aslClient; // @synthesize aslClient=_aslClient;
- (void)dealloc;
- (id)initWithCategory:(id)arg1;

@end
