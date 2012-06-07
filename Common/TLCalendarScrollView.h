//
//  TLCalendarScrollView.h
//  Calendar
//
//  Created by Tony Li on 4/18/12.
//  Copyright (c) 2012 Tony Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLCalendarDisplay.h"

@class TLCalendarScrollView;
@class NSCalendar;

@interface TLCalendarScrollView : UIScrollView<UIScrollViewDelegate> {
    NSArray *_views;
    NSCalendar *_calendar;
    BOOL _needLayoutWidgets;
}

@property (nonatomic, copy) NSArray *views;
@property (nonatomic, retain) NSDictionary *chineseFestivals;
@property (nonatomic, retain) NSDictionary *lunarFestivals;

- (id)initWithFrame:(CGRect)frame views:(NSArray *)views;

- (void)displayCurrentDateWithAnimation:(BOOL)animted;

- (void)setNeedsLayoutWidgets;

@end
