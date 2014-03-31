// Copyright © Microsoft Open Technologies, Inc.
//
// All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS
// OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
// ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A
// PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
//
// See the Apache License, Version 2.0 for the specific language
// governing permissions and limitations under the License.
#if TARGET_OS_IPHONE
//iOS:
#   include <UIKit/UIKit.h>
typedef UIWebView WebViewType;
#else
//OS X:
#   include <WebKit/WebKit.h>
typedef WebView   WebViewType;
#endif


@interface ADAuthenticationWebViewController
#if TARGET_OS_IPHONE
    : NSObject <UIWebViewDelegate>
#else
    : NSObject
#endif

@property (weak_delegate, nonatomic) id<ADAuthenticationDelegate> delegate;

- (id)initWithWebView:(WebViewType *)webView startAtURL:(NSURL *)startURL endAtURL:(NSURL *)endURL;
- (void)start;
- (void)stop;

@end
