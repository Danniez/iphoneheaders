/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <MIME/MessageTextAttachment.h>


@interface MessageTextAttachment (DisplayableTest)
-(BOOL)isRestrictedMimeType:(id)type;
-(id)contentTypeAndMimeType:(id*)type;
-(id)contentType;
-(BOOL)isCalendarFile;
-(BOOL)isContentTypeDisplayableByMobileMail:(id)mail;
-(BOOL)isDisplayableInsidePlugin;
-(BOOL)isDisplayableInline;
-(void)setDisplayableInline:(BOOL)anInline;
@end

@interface MessageTextAttachment (ComposeMarkup)
-(id)markupURL;
-(CGSize)markupSize;
-(id)markupStringForComposition:(BOOL)composition prependBlankLine:(BOOL)line;
@end
