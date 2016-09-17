// This file is part of Background Music.
//
// Background Music is free software: you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation, either version 2 of the
// License, or (at your option) any later version.
//
// Background Music is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Background Music. If not, see <http://www.gnu.org/licenses/>.

//
//  BGMUserDefaults.h
//  BGMApp
//
//  Copyright © 2016 Kyle Neideck
//
//  A simple wrapper around our use of NSUserDefaults.
//

// System includes
#import <Cocoa/Cocoa.h>


#pragma clang assume_nonnull begin

@interface BGMUserDefaults : NSObject

// Register the settings defaults. These are the preferences/state that only apply to BGMApp. The others are
// persisted on BGMDriver.
- (void) registerDefaults;

// The musicPlayerID (see BGMMusicPlayer.h), as a string, of the music player selected by the user. Must be either
// null or a string that can be parsed by NSUUID.
@property NSString* __nullable selectedMusicPlayerID;

@property BOOL autoPauseMusicEnabled;

@end

#pragma clang assume_nonnull end

