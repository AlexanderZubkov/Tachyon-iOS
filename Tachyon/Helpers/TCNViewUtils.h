#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TCNViewUtils : NSObject

/**
 @return @c YES if the @c UIApplication layout direction is right to left.
 
 @note This should only be called on the main thread.
 */
+ (BOOL)isLayoutDirectionRTL;

/**
 Recursively lays out this view and its subviews for right-to-left support.

 If the application's layout direction is not RTL, this is a no-op.

 @param view The view to lay out with RTL support.
 */
+ (void)layoutSubviewsForRTL:(nonnull UIView *)view;

@end
