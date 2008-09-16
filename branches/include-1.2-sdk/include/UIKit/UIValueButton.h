/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIThreePartButton.h>

@class NSString, UIImage;

@interface UIValueButton : UIThreePartButton
{
    int _displayStyle;
    NSString *_labelString;
    NSString *_valueString;
    NSString *_valueStyle;
    NSString *_valueHighlightStyle;
    UIImage *_labelBadgeImage;
    float _disclosureAlpha;
    struct CGColor *_valueColor;
    struct {
        unsigned int disclosureShown:1;
        unsigned int unused:31;
    } _valueButtonFlags;
}

+ (float)defaultHeight;	// IMP=0x3242b190
+ (struct CGRect)frameRectForOpaqueContentRect:(struct CGRect)fp8;	// IMP=0x3242b19c
+ (struct CGRect)opaqueContentRectForFrameRect:(struct CGRect)fp8;	// IMP=0x3242b1fc
- (void)_commonInitValueButton;	// IMP=0x3242b25c
- (void)_drawLabelAndValueStyleInteriorInRect:(struct CGRect)fp8;	// IMP=0x3242bed8
- (void)_drawValueStyleInteriorInRect:(struct CGRect)fp8 withValueColor:(struct CGColor *)fp24 valueFont:(struct __GSFont *)fp28 isPressed:(BOOL)fp32;	// IMP=0x3242b9dc
- (id)_titleByCombiningLabelAndValue;	// IMP=0x3242b4d4
- (float)buttonEdge;	// IMP=0x3242b9d4
- (void)dealloc;	// IMP=0x3242b44c
- (float)disclosureAlpha;	// IMP=0x3242b9a8
- (int)displayStyle;	// IMP=0x3242b8a0
- (void)drawButtonPart:(int)fp8 inRect:(struct CGRect)fp12;	// IMP=0x3242bbc8
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x3242b314
- (id)initWithTitle:(id)fp8;	// IMP=0x3242b3c0
- (id)label;	// IMP=0x3242b784
- (id)labelBadgeImage;	// IMP=0x3242b7e8
- (float)rightEndPadding;	// IMP=0x3242b908
- (void)setDisclosureAlpha:(float)fp8;	// IMP=0x3242b914
- (void)setDisplayStyle:(int)fp8;	// IMP=0x3242b874
- (void)setLabel:(id)fp8;	// IMP=0x3242b6d8
- (void)setLabelBadgeImage:(id)fp8;	// IMP=0x3242b78c
- (void)setShowsDisclosure:(BOOL)fp8;	// IMP=0x3242b8a8
- (void)setTitle:(id)fp8;	// IMP=0x3242b7f0
- (void)setValue:(id)fp8;	// IMP=0x3242b56c
- (void)setValueColor:(struct CGColor *)fp8;	// IMP=0x3242bac8
- (void)setValueHighlightStyle:(id)fp8;	// IMP=0x3242b67c
- (void)setValueStyle:(id)fp8;	// IMP=0x3242b620
- (BOOL)showsDisclosure;	// IMP=0x3242b8fc
- (void)sizeToFit;	// IMP=0x3242baf8
- (id)value;	// IMP=0x3242b618

@end
