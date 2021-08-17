// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "ue_msgs/msg/entity_state.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2EntityStateMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FEntityState
{
	GENERATED_BODY()

public:
	FString name;
	FVector pose_position;
	FQuat pose_orientation;
	FVector twist_linear;
	FVector twist_angular;
	FString reference_frame;
	

	void SetFromROS2(ue_msgs__msg__EntityState data)
	{
    	name.AppendChars(data.name.data, data.name.size);

		pose_position.X = data.pose.position.x;
		pose_position.Y = data.pose.position.y;
		pose_position.Z = data.pose.position.z;

		pose_orientation.X = data.pose.orientation.x;
		pose_orientation.Y = data.pose.orientation.y;
		pose_orientation.Z = data.pose.orientation.z;
		pose_orientation.W = data.pose.orientation.w;

		twist_linear.X = data.twist.linear.x;
		twist_linear.Y = data.twist.linear.y;
		twist_linear.Z = data.twist.linear.z;

		twist_angular.X = data.twist.angular.x;
		twist_angular.Y = data.twist.angular.y;
		twist_angular.Z = data.twist.angular.z;

		reference_frame.AppendChars(data.reference_frame.data, data.reference_frame.size);

		
	}

	void SetROS2(ue_msgs__msg__EntityState& data) const
	{
    	if (data.name.data != nullptr)
		{
			free(data.name.data);
		}
		data.name.data = (char*)malloc((name.Len()+1)*sizeof(char));
		memcpy(data.name.data, TCHAR_TO_ANSI(*name), (name.Len()+1)*sizeof(char));
		data.name.size = name.Len();
		data.name.capacity = name.Len() + 1;

		data.pose.position.x = pose_position.X;
		data.pose.position.y = pose_position.Y;
		data.pose.position.z = pose_position.Z;

		data.pose.orientation.x = pose_orientation.X;
		data.pose.orientation.y = pose_orientation.Y;
		data.pose.orientation.z = pose_orientation.Z;
		data.pose.orientation.w = pose_orientation.W;

		data.twist.linear.x = twist_linear.X;
		data.twist.linear.y = twist_linear.Y;
		data.twist.linear.z = twist_linear.Z;

		data.twist.angular.x = twist_angular.X;
		data.twist.angular.y = twist_angular.Y;
		data.twist.angular.z = twist_angular.Z;

		if (data.reference_frame.data != nullptr)
		{
			free(data.reference_frame.data);
		}
		data.reference_frame.data = (char*)malloc((reference_frame.Len()+1)*sizeof(char));
		memcpy(data.reference_frame.data, TCHAR_TO_ANSI(*reference_frame), (reference_frame.Len()+1)*sizeof(char));
		data.reference_frame.size = reference_frame.Len();
		data.reference_frame.capacity = reference_frame.Len() + 1;

		
	}
};

UCLASS()
class RCLUE_API UROS2EntityStateMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FEntityState Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FEntityState& Output);
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	ue_msgs__msg__EntityState entity_state_msg;
};