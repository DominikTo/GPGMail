/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCalendar, NSDate, NSMutableDictionary;

@interface MFUsageCounter : NSObject
{
    NSMutableDictionary *_counts;
    NSCalendar *_gregorianCalendar;
    NSDate *_referenceDate;
    BOOL _isDirty;
}

+ (void)setGatherJunkMailUsageCounts:(BOOL)arg1;
+ (BOOL)gatherJunkMailUsageCounts;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)incrementCountForKey:(id)arg1 byCount:(unsigned long long)arg2;
- (void)incrementCountForKey:(id)arg1;
- (void)removeCountForKey:(id)arg1;
- (unsigned long long)countForKey:(id)arg1 includeToday:(BOOL)arg2;
- (unsigned long long)countForKey:(id)arg1;
- (long long)numberOfDaysAvailableForKey:(id)arg1;
- (void)saveDefaults;
- (id)_dictionaryForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end

