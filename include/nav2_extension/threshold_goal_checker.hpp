#ifndef NAV2_EXTENSION__THRESHOLD_GOAL_CHECKER_HPP_
#define NAV2_EXTENSION__THRESHOLD_GOAL_CHECKER_HPP_

#include "nav2_core/goal_checker.hpp"

namespace nav2_extension
{
/**
* @class ThresholdGoalChecker
* @brief ... reminder: add this 
*/
class ThresholdGoalChecker : public nav2_core::GoalChecker
{
public:
    void initialize(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string & plugin_name,
        const std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) override;

    void reset() override;

    bool isGoalReached(
        const geometry_msgs::msg::Pose & query_pose, const geometry_msgs::msg::Pose & goal_pose,
        const geometry_msgs::msg::Twist & velocity) override;

    bool getTolerances(
        geometry_msgs::msg::Pose & pose_tolerance,
        geometry_msgs::msg::Twist & vel_tolerance) override;
};

} // namespace nav2_extension

#endif  //NAV2_EXTENSION__THRESHOLD_GOAL_CHECKER_HPP_