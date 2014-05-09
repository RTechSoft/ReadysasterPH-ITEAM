//
//  RAAppDelegate.h
//  ReadysasterPH
//
//  Created by Rodel Arenas on 5/9/14.
//  Copyright (c) 2014 i-Team. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
