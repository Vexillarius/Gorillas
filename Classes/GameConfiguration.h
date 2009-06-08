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
//  GameConfiguration.h
//  Gorillas
//
//  Created by Maarten Billemont on 28/02/09.
//  Copyright 2009 lhunath (Maarten Billemont). All rights reserved.
//



@interface GameConfiguration : NSObject {

    NSString *name;
    NSString *description;
    
    GorillasMode mode;
    NSUInteger sHumans, mHumans, sAis, mAis;
}

+(id) configurationWithName:(NSString *)_name description:(NSString *)_description
                       mode:(GorillasMode)_mode
                    sHumans:(NSUInteger)_sHumans mHumans:(NSUInteger)_mHumans
                       sAis:(NSUInteger)_sAis mAis:(NSUInteger)_mAis;

-(id) initWithName:(NSString *)_name description:(NSString *)_description
              mode:(GorillasMode)_mode
           sHumans:(NSUInteger)_sHumans mHumans:(NSUInteger)_mHumans
              sAis:(NSUInteger)_sAis mAis:(NSUInteger)_mAis;

@property (nonatomic, readonly) NSString       *name;
@property (nonatomic, readonly) NSString       *description;
@property (nonatomic, readonly) GorillasMode   mode;
@property (nonatomic, readonly) NSUInteger     sHumans;
@property (nonatomic, readonly) NSUInteger     mHumans;
@property (nonatomic, readonly) NSUInteger     sAis;
@property (nonatomic, readonly) NSUInteger     mAis;

@end