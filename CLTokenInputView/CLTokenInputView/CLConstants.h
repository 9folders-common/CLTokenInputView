//
//  CLConstants.h
//  CLTokenInputView
//
//  Created by NakCheon Jung on 05/09/2017.
//  Copyright © 2017 Cluster Labs, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern int ddLogLevel;

typedef NS_ENUM(NSInteger, CLTokenInputType) {
    CLTokenInputTypeTo = 0,
    CLTokenInputTypeCC,
    CLTokenInputTypeBCC,
};


@protocol CLTabResponderProtocol
@required
@property (weak, nonatomic, nullable) UIView *nextTabResponder;
@property (weak, nonatomic, nullable) UIView *previousTabResponder;
@property (assign, nonatomic) CLTokenInputType tokenInputType;
@end
