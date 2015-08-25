//
//  Resources.h
//  Created by Karl Krukow on 14/08/11.
//  Copyright 2011 LessPainful. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LPResources : NSObject

+ (NSArray *) eventsFromEncoding:(NSString *) encoded;
+ (NSArray *) transformEvents:(NSArray *) eventsRecord toPoint:(CGPoint) viewCenter;
+ (NSArray *) interpolateEvents:(NSArray *) baseEvents fromPoint:(CGPoint) startAt toPoint:(CGPoint) endAt;

@end
