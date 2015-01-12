// XXNibBridge.h
//
// Copyright (c) 2015 sunnyxx ( http://github.com/sunnyxx )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "XXNibConvention.h"

/// Any subclass of UIView that confirms this protocol is considered accept bridging
/// Usage:
///
///     // In FooView.h
///     @interface FooView : UIView <XXNibBridge>
///     @end
///
/// Or (Recommended):
///
///     // In FooView.m
///     @interface FooView () <XXNibBridge>
///     @end
///
@protocol XXNibBridge <NSObject>
@end

/// Deprecated
@interface UIView (XXNibBridgeDeprecated)

/// Subclass override it to switch On/Off IB bridging.
/// default -> NO
+ (BOOL)xx_shouldApplyNibBridging
__attribute__((deprecated("Use <XXNibBridge> instead")));

@end
