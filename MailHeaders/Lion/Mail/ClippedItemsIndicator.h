/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSButton.h"

@class NSMenu;

@interface ClippedItemsIndicator : NSButton
{
    id <ClippedItemsIndicatorDelegate> _delegate;
    NSMenu *_menu;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_keyStatusDidChange:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_popUpMenu;
- (void)drawRect:(struct CGRect)arg1;
- (void)menuDidClose:(id)arg1;

@end
