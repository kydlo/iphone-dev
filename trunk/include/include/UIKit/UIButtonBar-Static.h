/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIButtonBar.h>

@interface UIButtonBar (Static)
- (void)_adjustButtonSelection:(id)fp8;	// IMP=0x32422934
- (void)_buttonCancel:(id)fp8;	// IMP=0x324228ec
- (void)_buttonDown:(id)fp8;	// IMP=0x324227ac
- (void)_buttonDownDelayed:(id)fp8;	// IMP=0x32422800
- (void)_buttonUp:(id)fp8;	// IMP=0x32422844
- (id)_buttonWithDescription:(id)fp8;	// IMP=0x32426064
- (id)_configureFromOldButton:(id)fp8 toNewButtonWithTag:(int)fp12 skipTag:(int)fp16;	// IMP=0x32423588
- (id)_copyCurrentButtons;	// IMP=0x32423440
- (id)_descriptionForTag:(int)fp8;	// IMP=0x324227a0
- (void)_didMoveFromWindow:(id)fp8 toWindow:(id)fp12;	// IMP=0x32428588
- (void)_finishButtonAnimation:(int)fp8 forButton:(int)fp12;	// IMP=0x324237dc
- (void)_showButtons:(int *)fp8 withCount:(int)fp12 group:(int)fp16 withDuration:(double)fp20 adjustPositions:(BOOL)fp28 skipTag:(int)fp32;	// IMP=0x32422a08
@end
