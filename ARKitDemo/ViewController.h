//
//  ViewController.h
//  ARKitDemo
//
//  Created by zyq on 12/10/2017.
//  Copyright © 2017 Mutsu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SceneKit/SceneKit.h>
#import <ARKit/ARKit.h>

@interface ViewController : UIViewController

- (void)setupScene;
- (void)setupSession;
- (void)setupRecognizers;
- (void)insertGeometry:(ARHitTestResult *)hitResult;
- (void)explode:(ARHitTestResult *)hitResult;
- (void)handleTapFrom: (UITapGestureRecognizer *)recognizer;
- (void)handleHoldFrom: (UILongPressGestureRecognizer *)recognizer;
- (void)handleHidePlaneFrom: (UILongPressGestureRecognizer *)recognizer;

@property NSMutableDictionary *planes;
@property NSMutableArray *boxes;

@end
