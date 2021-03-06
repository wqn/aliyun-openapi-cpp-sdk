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

#include <alibabacloud/outboundbot/model/ListJobGroupsWithScenarioRequest.h>

using AlibabaCloud::OutboundBot::Model::ListJobGroupsWithScenarioRequest;

ListJobGroupsWithScenarioRequest::ListJobGroupsWithScenarioRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ListJobGroupsWithScenario")
{
	setMethod(HttpRequest::Method::Post);
}

ListJobGroupsWithScenarioRequest::~ListJobGroupsWithScenarioRequest()
{}

long ListJobGroupsWithScenarioRequest::getEndTime()const
{
	return endTime_;
}

void ListJobGroupsWithScenarioRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long ListJobGroupsWithScenarioRequest::getStartTime()const
{
	return startTime_;
}

void ListJobGroupsWithScenarioRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int ListJobGroupsWithScenarioRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListJobGroupsWithScenarioRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListJobGroupsWithScenarioRequest::getInstanceId()const
{
	return instanceId_;
}

void ListJobGroupsWithScenarioRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListJobGroupsWithScenarioRequest::getPageSize()const
{
	return pageSize_;
}

void ListJobGroupsWithScenarioRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

