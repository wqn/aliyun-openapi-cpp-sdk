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

#include <alibabacloud/ivpd/model/ListUserBucketsRequest.h>

using AlibabaCloud::Ivpd::Model::ListUserBucketsRequest;

ListUserBucketsRequest::ListUserBucketsRequest() :
	RpcServiceRequest("ivpd", "2019-06-25", "ListUserBuckets")
{
	setMethod(HttpRequest::Method::Post);
}

ListUserBucketsRequest::~ListUserBucketsRequest()
{}

std::vector<ListUserBucketsRequest::Data> ListUserBucketsRequest::getData()const
{
	return data_;
}

void ListUserBucketsRequest::setData(const std::vector<Data>& data)
{
	data_ = data;
	for(int dep1 = 0; dep1!= data.size(); dep1++) {
		auto dataObj = data.at(dep1);
		std::string dataObjStr = "Data." + std::to_string(dep1 + 1);
		setParameter(dataObjStr + ".RegionId", dataObj.regionId);
	}
}

