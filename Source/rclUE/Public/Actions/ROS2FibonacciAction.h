// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "unique_identifier_msgs/msg/uuid.h"
#include "ue4_interfaces/action/fibonacci.h"
#include "action_msgs/srv/cancel_goal.h"

#include "Actions/ROS2GenericAction.h"
#include "rclcUtilities.h"

#include "ROS2FibonacciAction.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FFibonacci_SendGoal_Request
{
	GENERATED_BODY()

public:
  	TArray<uint, TFixedAllocator<16>> goal_id;
	int order;
	

	void SetFromROS2(ue4_interfaces__action__Fibonacci_SendGoal_Request data)
	{
		for (int i=0; i<36; i++)
		{
			goal_id[i] = data.goal_id.uuid[i];
		}

    	order = data.goal.order;

		
	}

	void SetROS2(ue4_interfaces__action__Fibonacci_SendGoal_Request& data) const
	{
		for (int i=0; i<36; i++)
		{
			data.goal_id.uuid[i] = goal_id[i];
		}

    	data.goal.order = order;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FFibonacci_SendGoal_Response
{
	GENERATED_BODY()

public:
	bool accepted;
	int stamp_sec;
	uint stamp_nanosec;

	void SetFromROS2(ue4_interfaces__action__Fibonacci_SendGoal_Response data)
	{
    	accepted = data.accepted;
		stamp_sec = data.stamp.sec;
		stamp_nanosec = data.stamp.nanosec;
	}

	void SetROS2(ue4_interfaces__action__Fibonacci_SendGoal_Response& data) const
	{
    	data.accepted = accepted;
		data.stamp.sec = stamp_sec;
		data.stamp.nanosec = stamp_nanosec;
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FFibonacci_GetResult_Request
{
	GENERATED_BODY()

public:
  	TArray<uint, TFixedAllocator<16>> goal_id;

	void SetFromROS2(ue4_interfaces__action__Fibonacci_GetResult_Request data)
	{
		for (int i=0; i<36; i++)
		{
			goal_id[i] = data.goal_id.uuid[i];
		}

	}

	void SetROS2(ue4_interfaces__action__Fibonacci_GetResult_Request& data) const
	{
		for (int i=0; i<36; i++)
		{
			data.goal_id.uuid[i] = goal_id[i];
		}
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FFibonacci_GetResult_Response
{
	GENERATED_BODY()

public:
	int8 status;
	TArray<int> sequence;
	

	void SetFromROS2(ue4_interfaces__action__Fibonacci_GetResult_Response data)
	{
		status = data.status;
    	for (int i=0; i<sequence.Num(); i++)
		{
			sequence[i] = data.result.sequence.data[i];
		}

		
	}

	void SetROS2(ue4_interfaces__action__Fibonacci_GetResult_Response& data) const
	{
		data.status = status;
    	for (int i=0; i<sequence.Num(); i++)
		{
			data.result.sequence.data[i] = sequence[i];
		}

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FFibonacci_FeedbackMessage
{
	GENERATED_BODY()

public:
  	TArray<uint, TFixedAllocator<16>> goal_id;
	TArray<int> partial_sequence;
	

	void SetFromROS2(ue4_interfaces__action__Fibonacci_FeedbackMessage data)
	{
		for (int i=0; i<36; i++)
		{
			goal_id[i] = data.goal_id.uuid[i];
		}

    	for (int i=0; i<partial_sequence.Num(); i++)
		{
			partial_sequence[i] = data.feedback.partial_sequence.data[i];
		}

		
	}

	void SetROS2(ue4_interfaces__action__Fibonacci_FeedbackMessage& data) const
	{
		for (int i=0; i<36; i++)
		{
			data.goal_id.uuid[i] = goal_id[i];
		}
		
    	for (int i=0; i<partial_sequence.Num(); i++)
		{
			data.feedback.partial_sequence.data[i] = partial_sequence[i];
		}

		
	}
};

UCLASS()
class RCLUE_API UROS2FibonacciAction : public UROS2GenericAction
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;

	virtual void Fini() override;

	virtual const rosidl_action_type_support_t* GetTypeSupport() const override;

  	UFUNCTION(BlueprintCallable)
	void SetGoalRequest(const FFibonacci_SendGoal_Request Goal);

  	UFUNCTION(BlueprintCallable)
	void GetGoalRequest(FFibonacci_SendGoal_Request& Goal) const;
	
  	UFUNCTION(BlueprintCallable)
	void SetGoalResponse(const FFibonacci_SendGoal_Response Goal);

  	UFUNCTION(BlueprintCallable)
	void GetGoalResponse(FFibonacci_SendGoal_Response& Goal) const;
	
  	UFUNCTION(BlueprintCallable)
	void SetResultRequest(const FFibonacci_GetResult_Request Result);

  	UFUNCTION(BlueprintCallable)
	void GetResultRequest(FFibonacci_GetResult_Request& Result) const;
	
  	UFUNCTION(BlueprintCallable)
	void SetResultResponse(const FFibonacci_GetResult_Response Result);

  	UFUNCTION(BlueprintCallable)
	void GetResultResponse(FFibonacci_GetResult_Response& Result) const;



  	UFUNCTION(BlueprintCallable)
	void SetFeedback(const FFibonacci_FeedbackMessage Feedback);

  	UFUNCTION(BlueprintCallable)
	void GetFeedback(FFibonacci_FeedbackMessage& Feedback) const;
	
	virtual void* GetGoalRequest() override;
	virtual void* GetGoalResponse() override;
	virtual void* GetResultRequest() override;
	virtual void* GetResultResponse() override;
	virtual void* GetFeedbackMessage() override;

private:
	ue4_interfaces__action__Fibonacci_SendGoal_Request Fibonacci_goal_request;
	ue4_interfaces__action__Fibonacci_SendGoal_Response Fibonacci_goal_response;
	ue4_interfaces__action__Fibonacci_GetResult_Request Fibonacci_result_request;
	ue4_interfaces__action__Fibonacci_GetResult_Response Fibonacci_result_response;
	ue4_interfaces__action__Fibonacci_FeedbackMessage Fibonacci_feedback_message;
};