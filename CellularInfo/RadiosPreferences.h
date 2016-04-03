/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <foundation/Foundation.h>

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    int _applySkipCount;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    BOOL notifyForExternalChangeOnly;
}

@property(nonatomic) BOOL notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;
//- (void)setCallback:(void *)arg1 withContext:(CDStruct_60d14f2d *)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)refresh;
@property(nonatomic) BOOL airplaneMode;
- (void)dealloc;
- (id)init;

@end
