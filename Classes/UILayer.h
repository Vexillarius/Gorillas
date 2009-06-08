/*
 * This file is part of Gorillas.
 *
 *  Gorillas is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Gorillas is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Gorillas in the file named 'COPYING'.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  UILayer.h
//  Gorillas
//
//  Created by Maarten Billemont on 08/03/09.
//  Copyright 2009 lhunath (Maarten Billemont). All rights reserved.
//


@interface UILayer : Layer {
    
    Label                                   *messageLabel;
    NSMutableArray                          *messageQueue, *callbackQueue;
    
    RotateTo                                *rotateAction;
    UIAccelerationValue                     accelX, accelY, accelZ;
}

-(void) rotateTo:(float)aRotation;

-(void) message:(NSString *)msg;
-(void) message:(NSString *)msg callback:(id)target :(SEL)selector;

@end