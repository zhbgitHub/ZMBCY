//
//  ZMProfileViewCell.h
//  ZMBCY
//
//  Created by ZOMAKE on 2018/1/8.
//  Copyright © 2018年 Brance. All rights reserved.
//

#import "YYTableViewCell.h"

@interface ZMProfileViewCell : UITableViewCell

@property (nonatomic, strong) UIView        *mainView;
@property (nonatomic, strong) UILabel       *nameLabel;
@property (nonatomic, strong) UILabel       *rightTextLabel;
@property (nonatomic, strong) UIImageView   *arrowImageView;
@property (nonatomic, strong) UIImageView   *topLine;
@property (nonatomic, strong) UIImageView   *bottomLine;
@property (nonatomic, assign) BOOL          showBottomLine;
@property (nonatomic, assign) BOOL          showTopLine;

@end
