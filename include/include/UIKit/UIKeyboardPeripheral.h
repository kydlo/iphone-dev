/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIKeyboard.h>

#import "UIFormPeripheralProtocol.h"

@interface UIKeyboardPeripheral : UIKeyboard <UIFormPeripheral>
{
    id <UITextControl> _control;
    int _orientation;
}

+ (BOOL)isUniqueForEachFormControl;	// IMP=0x32469b20
- (void)dealloc;	// IMP=0x32469c64
- (void)endEditing;	// IMP=0x32469cbc
- (id)initFormPeripheral;	// IMP=0x32469b28
- (int)orientation;	// IMP=0x32469e44
- (void)resumeWithNotification:(id)fp8;	// IMP=0x32469e4c
- (void)setFormControl:(id)fp8;	// IMP=0x32469cd8

@end
