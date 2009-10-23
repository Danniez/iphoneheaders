/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"

@class TPLockKnobView, NSArray, TPLockTextView, NSTimer;

@interface TPBottomLockBar : TPBottomBar {
	NSArray* _labels;
	int _currentLabelIndex;
	NSTimer* _cycleLabelTimer;
	id _delegate;
	id _representedObject;
	TPLockKnobView* _knobView;
	UIView* _trackArrow;
	TPLockTextView* _labelView;
	float _knobTrackInsetLeft;
	float _fontSize;
}
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)frame knobImage:(id)image;
-(id)initWithFrame:(CGRect)frame knobColor:(int)color;
-(id)initForIncomingCallWithFrame:(CGRect)frame;
-(id)knob;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)isAnimating;
-(void)downInKnob;
-(void)upInKnob;
-(void)setLabel:(id)label;
-(void)_setLabel:(id)label;
-(void)startCyclingLabels;
-(void)stopCyclingLabels;
-(void)cycleToNextLabel;
-(int)currentLabelIndex;
-(void)finishedCyclingLabelOut;
-(void)cycleToLabelAtIndex:(int)index;
-(void)setLabels:(id)labels;
-(id)labels;
-(void)setFontSize:(float)size;
-(float)fontSize;
-(void)knobDragged:(float)dragged;
-(void)slideBack:(BOOL)back;
-(void)relock;
-(void)freezeKnobInUnlockedPosition;
-(void)unlock;
-(void)setDelegate:(id)delegate;
-(void)setRepresentedObject:(id)object;
-(id)representedObject;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(float)knobTrackInsetLeft;
@end

