/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RACSignal.h"

@class NSMutableArray;

@interface RACDynamicSignal : RACSignal {
	NSMutableArray* _subscribers;
	int _subscribersLock;
	id _didSubscribe;
}
@property(readonly, copy, nonatomic) id didSubscribe;
+(id)createSignal:(id)signal;
+(void)initialize;
//-(void).cxx_destruct;
-(id)subscribe:(id)subscribe;
-(BOOL)hasSubscribers;
-(void)invalidateGlobalRefIfNoNewSubscribersShowUp;
-(id)init;
@end




@interface NSObject (RACSupport)
-(id)rac_readInBackground;
@end

@interface NSObject (RACTypeParsing)
//@property(copy, nonatomic) RACTuple* rac_argumentsTuple;
-(id)rac_returnValue;
-(id)rac_argumentAtIndex:(unsigned)index;
-(void)rac_setArgument:(id)argument atIndex:(unsigned)index;
@end