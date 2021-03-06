/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFAPSManager.h"
#import <ActorKit/AKActor.h>
#import "APSConnectionDelegate.h"

@class APSConnection, NSMutableSet;

@protocol MFAPSManager <APSConnectionDelegate>
-(oneway void)startWatchingForTopic:(id)topic;
-(oneway void)stopWatchingForTopic:(id)topic;
-(oneway void)swapTopic:(id)topic forNewTopic:(id)newTopic;
-(oneway void)connect;
-(oneway void)startup;
@end

@interface MFAPSManager : AKActor <MFAPSManager> {
	APSConnection* _pushService;
	NSMutableSet* _watchedTopics;
	NSMutableSet* _unwatchedTopics;
}
+(id)sharedManager;
-(void)startAPS;
-(void)stopAPS;
// in a protocol: -(oneway void)startWatchingForTopic:(id)topic;
// in a protocol: -(oneway void)stopWatchingForTopic:(id)topic;
// in a protocol: -(oneway void)swapTopic:(id)topic forNewTopic:(id)newTopic;
// in a protocol: -(oneway void)connect;
// in a protocol: -(oneway void)startup;
// in a protocol: -(void)connection:(id)connection didReceivePublicToken:(id)token;
// in a protocol: -(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
// inherited: -(id)init;
// inherited: -(void)dealloc;
@end

