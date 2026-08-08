#include <stdexcept>

#include "nav2_extension/threshold_goal_checker.hpp"

namespace nav2_extension
{

ThresholdGoalChecker::ThresholdGoalChecker()
{
}

void ThresholdGoalChecker::reset()
{
}

void ThresholdGoalChecker::initialize(
    const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
    const std::string & plugin_name,
    const std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
{

    auto node = parent.lock(); // std::shared_ptr<rclcpp_lifecycle::LifecycleNode>
    if (!node) {
        throw std::runtime_error("Failed to access lifecycle node");
    }

    const std::string xy_parameter = plugin_name +".xy_goal_tolerance";
}

} // namespace nav2_extension