#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DimModel.h"
#import "DimPlugin.h"
#import "MJExtension.h"
#import "MJExtensionConst.h"
#import "MJFoundation.h"
#import "MJProperty.h"
#import "MJPropertyKey.h"
#import "MJPropertyType.h"
#import "NSObject+MJClass.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJProperty.h"
#import "NSString+MJExtension.h"
#import "MyGenerateTestUserSig.h"

FOUNDATION_EXPORT double dimVersionNumber;
FOUNDATION_EXPORT const unsigned char dimVersionString[];

