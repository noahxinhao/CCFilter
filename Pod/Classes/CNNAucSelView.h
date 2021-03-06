//
//  CNNAucSelView.h
//  cheniu
//
//  Created by 黄成 on 15/9/9.
//  Copyright (c) 2015年 cheng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CNNAucFliter;
@class CNNAucSelView;

typedef NS_ENUM(NSInteger, TableViewStyle){
    TableViewStyleNone = 0,
    TableViewStyleGroup = 1
};

@protocol CNNAucSelViewDelegate <NSObject>

@optional

- (NSMutableArray*)selViewDataOfFilterBar:(CNNAucSelView*)selView;

- (void)selView:(CNNAucSelView*)selView didSelectedFilterBar:(id)selectedItem;

- (void)selView:(CNNAucSelView*)selView didSelectedItem:(id)selected;

@end

@interface CNNAucSelView : UIView

@property (nonatomic,assign) TableViewStyle style;

@property (nonatomic,strong) NSMutableDictionary *dataDictionary;
@property (nonatomic,strong) NSMutableArray *titleArray;

@property (nonatomic,strong) NSMutableArray *dataOfFliterBar;

@property (nonatomic,assign) CGFloat maxTableHeight;

@property (nonatomic,weak) id<CNNAucSelViewDelegate>delegate;

@property (nonatomic,strong) NSMutableDictionary *selectedFilterBarDict;

@property (nonatomic,strong) UITableView *tableViewSel;
@property (nonatomic,strong) CNNAucFliter *fliterBar;

- (void)loadWithData:(NSMutableArray*)array withStyle:(TableViewStyle)style;

- (void)show;
- (void)hide;

@end
