//
//  MMPopupWindow.h
//  MMPopupView
//
//  Created by Ralph Li on 9/6/15.
//  Copyright © 2015 LJC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMPopupWindow : UIWindow

@property (nonatomic, assign) BOOL touchWildToHide; // default is NO. When YES, popup views will be hidden when user touch the translucent background.

+ (MMPopupWindow *)sharedWindow;

/**
 *  cache the window to prevent the lag of the first showing.
 */
- (void) cacheWindow;

/**
 *  show the translucent background
 */
- (void) showDimBackground;


/**
 *  hide the translucent background
 */
- (void) hideDimBackground;

@end
