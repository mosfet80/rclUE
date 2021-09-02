// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/Pose.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/pose.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2PoseMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPose
{
	GENERATED_BODY()

public:
	double position_x;

	double position_y;

	double position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat orientation;

	

	void SetFromROS2(const geometry_msgs__msg__Pose& in_ros_data)
	{
    	position_x = in_ros_data.position.x;

		position_y = in_ros_data.position.y;

		position_z = in_ros_data.position.z;

		orientation.X = in_ros_data.orientation.x;
		orientation.Y = in_ros_data.orientation.y;
		orientation.Z = in_ros_data.orientation.z;
		orientation.W = in_ros_data.orientation.w;

		
	}

	void SetROS2(geometry_msgs__msg__Pose& out_ros_data) const
	{
    	out_ros_data.position.x = position_x;

		out_ros_data.position.y = position_y;

		out_ros_data.position.z = position_z;

		out_ros_data.orientation.x = orientation.X;
		out_ros_data.orientation.y = orientation.Y;
		out_ros_data.orientation.z = orientation.Z;
		out_ros_data.orientation.w = orientation.W;

		
	}
};

UCLASS()
class RCLUE_API UROS2PoseMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSPose& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSPose& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__Pose pose_msg;
};