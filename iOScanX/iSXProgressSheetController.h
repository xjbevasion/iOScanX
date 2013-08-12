//
//  iSXProgressSheetController.h
//  iOScanX
//
//  Created by Alessio Maffeis on 12/08/13.
//  Copyright (c) 2013 Alessio Maffeis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iSXProgressSheetController : NSObject

@property (assign) BOOL isIndeterminate;
@property (assign) NSInteger minValue;
@property (assign) NSInteger maxValue;
@property (assign) NSInteger value;
@property (copy) NSString *message;

- (void) showSheet:(NSWindow*)window;
- (void) closeSheet;

@end