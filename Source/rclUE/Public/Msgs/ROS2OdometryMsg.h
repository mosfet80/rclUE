// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/Odometry.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "nav_msgs/msg/odometry.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2OdometryMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSOdometry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString child_frame_id;

	double pose_pose_position_x;

	double pose_pose_position_y;

	double pose_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat pose_pose_orientation;

	TArray<double> pose_covariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector twist_twist_linear;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector twist_twist_angular;

	TArray<double> twist_covariance;

	

	void SetFromROS2(const nav_msgs__msg__Odometry& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		child_frame_id.AppendChars(in_ros_data.child_frame_id.data, in_ros_data.child_frame_id.size);

		pose_pose_position_x = in_ros_data.pose.pose.position.x;

		pose_pose_position_y = in_ros_data.pose.pose.position.y;

		pose_pose_position_z = in_ros_data.pose.pose.position.z;

		pose_pose_orientation.X = in_ros_data.pose.pose.orientation.x;
		pose_pose_orientation.Y = in_ros_data.pose.pose.orientation.y;
		pose_pose_orientation.Z = in_ros_data.pose.pose.orientation.z;
		pose_pose_orientation.W = in_ros_data.pose.pose.orientation.w;

		for (int i = 0; i < 36; i++)
		{
			pose_covariance[i] = in_ros_data.pose.covariance[i];
		}

		twist_twist_linear.X = in_ros_data.twist.twist.linear.x;
		twist_twist_linear.Y = in_ros_data.twist.twist.linear.y;
		twist_twist_linear.Z = in_ros_data.twist.twist.linear.z;

		twist_twist_angular.X = in_ros_data.twist.twist.angular.x;
		twist_twist_angular.Y = in_ros_data.twist.twist.angular.y;
		twist_twist_angular.Z = in_ros_data.twist.twist.angular.z;

		for (int i = 0; i < 36; i++)
		{
			twist_covariance[i] = in_ros_data.twist.covariance[i];
		}

		
	}

	void SetROS2(nav_msgs__msg__Odometry& out_ros_data) const
	{
    	out_ros_data.header.stamp.sec = header_stamp_sec;

		out_ros_data.header.stamp.nanosec = header_stamp_nanosec;

		if (out_ros_data.header.frame_id.data != nullptr)
		{
			free(out_ros_data.header.frame_id.data);
		}
		out_ros_data.header.frame_id.data = (decltype(out_ros_data.header.frame_id.data))malloc((header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.header.frame_id.data)));
		memcpy(out_ros_data.header.frame_id.data, TCHAR_TO_ANSI(*header_frame_id), (header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.header.frame_id.size = header_frame_id.Len();
		out_ros_data.header.frame_id.capacity = header_frame_id.Len() + 1;

		if (out_ros_data.child_frame_id.data != nullptr)
		{
			free(out_ros_data.child_frame_id.data);
		}
		out_ros_data.child_frame_id.data = (decltype(out_ros_data.child_frame_id.data))malloc((child_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.child_frame_id.data)));
		memcpy(out_ros_data.child_frame_id.data, TCHAR_TO_ANSI(*child_frame_id), (child_frame_id.Len()+1)*sizeof(char));
		out_ros_data.child_frame_id.size = child_frame_id.Len();
		out_ros_data.child_frame_id.capacity = child_frame_id.Len() + 1;

		out_ros_data.pose.pose.position.x = pose_pose_position_x;

		out_ros_data.pose.pose.position.y = pose_pose_position_y;

		out_ros_data.pose.pose.position.z = pose_pose_position_z;

		out_ros_data.pose.pose.orientation.x = pose_pose_orientation.X;
		out_ros_data.pose.pose.orientation.y = pose_pose_orientation.Y;
		out_ros_data.pose.pose.orientation.z = pose_pose_orientation.Z;
		out_ros_data.pose.pose.orientation.w = pose_pose_orientation.W;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.pose.covariance[i] = pose_covariance[i];
		}

		out_ros_data.twist.twist.linear.x = twist_twist_linear.X;
		out_ros_data.twist.twist.linear.y = twist_twist_linear.Y;
		out_ros_data.twist.twist.linear.z = twist_twist_linear.Z;

		out_ros_data.twist.twist.angular.x = twist_twist_angular.X;
		out_ros_data.twist.twist.angular.y = twist_twist_angular.Y;
		out_ros_data.twist.twist.angular.z = twist_twist_angular.Z;

		for (int i = 0; i < 36; i++)
		{
			out_ros_data.twist.covariance[i] = twist_covariance[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2OdometryMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSOdometry& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSOdometry& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	nav_msgs__msg__Odometry odometry_msg;
};