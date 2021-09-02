// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/GetPlan.srv - do not modify

#pragma once

#include <CoreMinimal.h>

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "nav_msgs/srv/get_plan.h"

#include "ROS2GetPlanSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSGetPlan_Request
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int start_header_stamp_sec;

	unsigned int start_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString start_header_frame_id;

	double start_pose_position_x;

	double start_pose_position_y;

	double start_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat start_pose_orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int goal_header_stamp_sec;

	unsigned int goal_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString goal_header_frame_id;

	double goal_pose_position_x;

	double goal_pose_position_y;

	double goal_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat goal_pose_orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float tolerance;

	

	void SetFromROS2(const nav_msgs__srv__GetPlan_Request& in_ros_data)
	{
    	start_header_stamp_sec = in_ros_data.start.header.stamp.sec;

		start_header_stamp_nanosec = in_ros_data.start.header.stamp.nanosec;

		start_header_frame_id.AppendChars(in_ros_data.start.header.frame_id.data, in_ros_data.start.header.frame_id.size);

		start_pose_position_x = in_ros_data.start.pose.position.x;

		start_pose_position_y = in_ros_data.start.pose.position.y;

		start_pose_position_z = in_ros_data.start.pose.position.z;

		start_pose_orientation.X = in_ros_data.start.pose.orientation.x;
		start_pose_orientation.Y = in_ros_data.start.pose.orientation.y;
		start_pose_orientation.Z = in_ros_data.start.pose.orientation.z;
		start_pose_orientation.W = in_ros_data.start.pose.orientation.w;

		goal_header_stamp_sec = in_ros_data.goal.header.stamp.sec;

		goal_header_stamp_nanosec = in_ros_data.goal.header.stamp.nanosec;

		goal_header_frame_id.AppendChars(in_ros_data.goal.header.frame_id.data, in_ros_data.goal.header.frame_id.size);

		goal_pose_position_x = in_ros_data.goal.pose.position.x;

		goal_pose_position_y = in_ros_data.goal.pose.position.y;

		goal_pose_position_z = in_ros_data.goal.pose.position.z;

		goal_pose_orientation.X = in_ros_data.goal.pose.orientation.x;
		goal_pose_orientation.Y = in_ros_data.goal.pose.orientation.y;
		goal_pose_orientation.Z = in_ros_data.goal.pose.orientation.z;
		goal_pose_orientation.W = in_ros_data.goal.pose.orientation.w;

		tolerance = in_ros_data.tolerance;

		
	}

	void SetROS2(nav_msgs__srv__GetPlan_Request& out_ros_data) const
	{
    	out_ros_data.start.header.stamp.sec = start_header_stamp_sec;

		out_ros_data.start.header.stamp.nanosec = start_header_stamp_nanosec;

		if (out_ros_data.start.header.frame_id.data != nullptr)
		{
			free(out_ros_data.start.header.frame_id.data);
		}
		out_ros_data.start.header.frame_id.data = (decltype(out_ros_data.start.header.frame_id.data))malloc((start_header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.start.header.frame_id.data)));
		memcpy(out_ros_data.start.header.frame_id.data, TCHAR_TO_ANSI(*start_header_frame_id), (start_header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.start.header.frame_id.size = start_header_frame_id.Len();
		out_ros_data.start.header.frame_id.capacity = start_header_frame_id.Len() + 1;

		out_ros_data.start.pose.position.x = start_pose_position_x;

		out_ros_data.start.pose.position.y = start_pose_position_y;

		out_ros_data.start.pose.position.z = start_pose_position_z;

		out_ros_data.start.pose.orientation.x = start_pose_orientation.X;
		out_ros_data.start.pose.orientation.y = start_pose_orientation.Y;
		out_ros_data.start.pose.orientation.z = start_pose_orientation.Z;
		out_ros_data.start.pose.orientation.w = start_pose_orientation.W;

		out_ros_data.goal.header.stamp.sec = goal_header_stamp_sec;

		out_ros_data.goal.header.stamp.nanosec = goal_header_stamp_nanosec;

		if (out_ros_data.goal.header.frame_id.data != nullptr)
		{
			free(out_ros_data.goal.header.frame_id.data);
		}
		out_ros_data.goal.header.frame_id.data = (decltype(out_ros_data.goal.header.frame_id.data))malloc((goal_header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.goal.header.frame_id.data)));
		memcpy(out_ros_data.goal.header.frame_id.data, TCHAR_TO_ANSI(*goal_header_frame_id), (goal_header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.goal.header.frame_id.size = goal_header_frame_id.Len();
		out_ros_data.goal.header.frame_id.capacity = goal_header_frame_id.Len() + 1;

		out_ros_data.goal.pose.position.x = goal_pose_position_x;

		out_ros_data.goal.pose.position.y = goal_pose_position_y;

		out_ros_data.goal.pose.position.z = goal_pose_position_z;

		out_ros_data.goal.pose.orientation.x = goal_pose_orientation.X;
		out_ros_data.goal.pose.orientation.y = goal_pose_orientation.Y;
		out_ros_data.goal.pose.orientation.z = goal_pose_orientation.Z;
		out_ros_data.goal.pose.orientation.w = goal_pose_orientation.W;

		out_ros_data.tolerance = tolerance;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSGetPlan_Response
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int plan_header_stamp_sec;

	unsigned int plan_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString plan_header_frame_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> plan_poses_header_stamp_sec;

	TArray<unsigned int> plan_poses_header_stamp_nanosec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> plan_poses_header_frame_id;

	TArray<double> plan_poses_pose_position_x;

	TArray<double> plan_poses_pose_position_y;

	TArray<double> plan_poses_pose_position_z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FQuat> plan_poses_pose_orientation;

	

	void SetFromROS2(const nav_msgs__srv__GetPlan_Response& in_ros_data)
	{
    	plan_header_stamp_sec = in_ros_data.plan.header.stamp.sec;

		plan_header_stamp_nanosec = in_ros_data.plan.header.stamp.nanosec;

		plan_header_frame_id.AppendChars(in_ros_data.plan.header.frame_id.data, in_ros_data.plan.header.frame_id.size);

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_header_stamp_sec[i] = in_ros_data.plan.poses.data[i].header.stamp.sec;
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_header_stamp_nanosec[i] = in_ros_data.plan.poses.data[i].header.stamp.nanosec;
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_header_frame_id[i].AppendChars(in_ros_data.plan.poses.data[i].header.frame_id.data,in_ros_data.plan.poses.data[i].header.frame_id.size);
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_pose_position_x[i] = in_ros_data.plan.poses.data[i].pose.position.x;
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_pose_position_y[i] = in_ros_data.plan.poses.data[i].pose.position.y;
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_pose_position_z[i] = in_ros_data.plan.poses.data[i].pose.position.z;
		}

		for (int i = 0; i < in_ros_data.plan.poses.size; i++)
		{
			plan_poses_pose_orientation[i].X = in_ros_data.plan.poses.data[i].pose.orientation.x;
			plan_poses_pose_orientation[i].Y = in_ros_data.plan.poses.data[i].pose.orientation.y;
			plan_poses_pose_orientation[i].Z = in_ros_data.plan.poses.data[i].pose.orientation.z;
			plan_poses_pose_orientation[i].W = in_ros_data.plan.poses.data[i].pose.orientation.w;
		}

		
	}

	void SetROS2(nav_msgs__srv__GetPlan_Response& out_ros_data) const
	{
    	out_ros_data.plan.header.stamp.sec = plan_header_stamp_sec;

		out_ros_data.plan.header.stamp.nanosec = plan_header_stamp_nanosec;

		if (out_ros_data.plan.header.frame_id.data != nullptr)
		{
			free(out_ros_data.plan.header.frame_id.data);
		}
		out_ros_data.plan.header.frame_id.data = (decltype(out_ros_data.plan.header.frame_id.data))malloc((plan_header_frame_id.Len() + 1)*sizeof(decltype(*out_ros_data.plan.header.frame_id.data)));
		memcpy(out_ros_data.plan.header.frame_id.data, TCHAR_TO_ANSI(*plan_header_frame_id), (plan_header_frame_id.Len()+1)*sizeof(char));
		out_ros_data.plan.header.frame_id.size = plan_header_frame_id.Len();
		out_ros_data.plan.header.frame_id.capacity = plan_header_frame_id.Len() + 1;

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_header_stamp_sec.Num())*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_header_stamp_sec.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].header.stamp.sec = plan_poses_header_stamp_sec[i];
		}

		out_ros_data.plan.poses.size = plan_poses_header_stamp_sec.Num();
		out_ros_data.plan.poses.capacity = plan_poses_header_stamp_sec.Num();

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_header_stamp_nanosec.Num())*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_header_stamp_nanosec.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].header.stamp.nanosec = plan_poses_header_stamp_nanosec[i];
		}

		out_ros_data.plan.poses.size = plan_poses_header_stamp_nanosec.Num();
		out_ros_data.plan.poses.capacity = plan_poses_header_stamp_nanosec.Num();

		for (int i = 0; i < plan_poses_header_frame_id.Num(); i++)
		{
			if (out_ros_data.plan.poses.data != nullptr)
			{
				free(out_ros_data.plan.poses.data);
			}
			out_ros_data.plan.poses.data[i].header.frame_id.data = (char*)malloc((plan_poses_header_frame_id[i].Len()+1)*sizeof(char));
			memcpy(out_ros_data.plan.poses.data[i].header.frame_id.data, TCHAR_TO_ANSI(*plan_poses_header_frame_id[i]), (plan_poses_header_frame_id[i].Len()+1)*sizeof(char));
			out_ros_data.plan.poses.size = plan_poses_header_frame_id[i].Len();
			out_ros_data.plan.poses.capacity = plan_poses_header_frame_id[i].Len() + 1;
		}

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_pose_position_x.Num())*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_pose_position_x.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].pose.position.x = plan_poses_pose_position_x[i];
		}

		out_ros_data.plan.poses.size = plan_poses_pose_position_x.Num();
		out_ros_data.plan.poses.capacity = plan_poses_pose_position_x.Num();

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_pose_position_y.Num())*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_pose_position_y.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].pose.position.y = plan_poses_pose_position_y[i];
		}

		out_ros_data.plan.poses.size = plan_poses_pose_position_y.Num();
		out_ros_data.plan.poses.capacity = plan_poses_pose_position_y.Num();

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_pose_position_z.Num())*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_pose_position_z.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].pose.position.z = plan_poses_pose_position_z[i];
		}

		out_ros_data.plan.poses.size = plan_poses_pose_position_z.Num();
		out_ros_data.plan.poses.capacity = plan_poses_pose_position_z.Num();

		if (out_ros_data.plan.poses.data != nullptr)
		{
			free(out_ros_data.plan.poses.data);
		}
		out_ros_data.plan.poses.data = (decltype(out_ros_data.plan.poses.data))malloc((plan_poses_pose_orientation.Num() * 4)*sizeof(decltype(*out_ros_data.plan.poses.data)));
		
		for (int i = 0; i < plan_poses_pose_orientation.Num(); i++)
		{
			out_ros_data.plan.poses.data[i].pose.orientation.x = plan_poses_pose_orientation[i].X;
			out_ros_data.plan.poses.data[i].pose.orientation.y = plan_poses_pose_orientation[i].Y;
			out_ros_data.plan.poses.data[i].pose.orientation.z = plan_poses_pose_orientation[i].Z;
			out_ros_data.plan.poses.data[i].pose.orientation.w = plan_poses_pose_orientation[i].W;
		}

		out_ros_data.plan.poses.size = plan_poses_pose_orientation.Num();
		out_ros_data.plan.poses.capacity = plan_poses_pose_orientation.Num();

		
	}
};

UCLASS()
class RCLUE_API UROS2GetPlanSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FROSGetPlan_Request& Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FROSGetPlan_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FROSGetPlan_Response& Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FROSGetPlan_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	nav_msgs__srv__GetPlan_Request GetPlan_req;
	nav_msgs__srv__GetPlan_Response GetPlan_res;
};