/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/vpc/model/DescribeNewProjectEipMonitorDataRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNewProjectEipMonitorDataRequest;

DescribeNewProjectEipMonitorDataRequest::DescribeNewProjectEipMonitorDataRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeNewProjectEipMonitorData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNewProjectEipMonitorDataRequest::~DescribeNewProjectEipMonitorDataRequest()
{}

long DescribeNewProjectEipMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNewProjectEipMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNewProjectEipMonitorDataRequest::getAllocationId()const
{
	return allocationId_;
}

void DescribeNewProjectEipMonitorDataRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setParameter("AllocationId", allocationId);
}

std::string DescribeNewProjectEipMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeNewProjectEipMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeNewProjectEipMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNewProjectEipMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeNewProjectEipMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeNewProjectEipMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribeNewProjectEipMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNewProjectEipMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNewProjectEipMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNewProjectEipMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeNewProjectEipMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeNewProjectEipMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeNewProjectEipMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNewProjectEipMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

