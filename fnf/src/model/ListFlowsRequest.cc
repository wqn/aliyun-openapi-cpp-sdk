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

#include <alibabacloud/fnf/model/ListFlowsRequest.h>

using AlibabaCloud::Fnf::Model::ListFlowsRequest;

ListFlowsRequest::ListFlowsRequest() :
	RpcServiceRequest("fnf", "2019-03-15", "ListFlows")
{}

ListFlowsRequest::~ListFlowsRequest()
{}

std::string ListFlowsRequest::getNextToken()const
{
	return nextToken_;
}

void ListFlowsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setCoreParameter("NextToken", nextToken);
}

std::string ListFlowsRequest::getRequestId()const
{
	return requestId_;
}

void ListFlowsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

int ListFlowsRequest::getLimit()const
{
	return limit_;
}

void ListFlowsRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}
