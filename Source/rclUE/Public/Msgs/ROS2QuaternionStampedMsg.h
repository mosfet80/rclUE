// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from geometry_msgs/QuaternionStamped.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "geometry_msgs/msg/quaternion_stamped.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2QuaternionStampedMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSQuaternionStamped
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int header_stamp_sec;

	unsigned int header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat quaternion;

	

	void SetFromROS2(const geometry_msgs__msg__QuaternionStamped& in_ros_data)
	{
    	header_stamp_sec = in_ros_data.header.stamp.sec;

		header_stamp_nanosec = in_ros_data.header.stamp.nanosec;

		header_frame_id.AppendChars(in_ros_data.header.frame_id.data, in_ros_data.header.frame_id.size);

		quaternion.X = in_ros_data.quaternion.x;
		quaternion.Y = in_ros_data.quaternion.y;
		quaternion.Z = in_ros_data.quaternion.z;
		quaternion.W = in_ros_data.quaternion.w;

		
	}

	void SetROS2(geometry_msgs__msg__QuaternionStamped& out_ros_data) const
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

		out_ros_data.quaternion.x = quaternion.X;
		out_ros_data.quaternion.y = quaternion.Y;
		out_ros_data.quaternion.z = quaternion.Z;
		out_ros_data.quaternion.w = quaternion.W;

		
	}
};

UCLASS()
class RCLUE_API UROS2QuaternionStampedMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSQuaternionStamped& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSQuaternionStamped& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	geometry_msgs__msg__QuaternionStamped quaternion_stamped_msg;
};