//
//  Plane.h
//  ARKitDemo
//
//  Created by zyq on 12/10/2017.
//  Copyright © 2017 Mutsu. All rights reserved.
//

#import <SceneKit/SceneKit.h>
#import <ARKit/ARKit.h>

@interface Plane : SCNNode

- (instancetype)initWithAnchor:(ARPlaneAnchor *)anchor isHidden:(BOOL)hidden;
- (void)update:(ARPlaneAnchor *)anchor;
- (void)setTextureScale;
- (void)hide;

@property (nonatomic,retain) ARPlaneAnchor *anchor;
@property (nonatomic, retain) SCNBox *planeGeometry;

@end
