//
//  RSPButton.m
//  SketchPlugin
//
//  Created by aboyko on 5/22/17.
//  Copyright © 2017 Reinvently. All rights reserved.
//

#import "RSPButton.h"

@implementation RSPButton
- (void)setEnabled:(BOOL)enabled {
    [super setEnabled:enabled];
    if (self.alternateImage == nil) {
        self.alphaValue = enabled ? 1.0 : 0.7;
    }
}
@end
