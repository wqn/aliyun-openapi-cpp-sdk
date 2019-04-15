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

#include <alibabacloud/aegis/model/DescribeWebLockStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebLockStatusResult::DescribeWebLockStatusResult() :
	ServiceResult()
{}

DescribeWebLockStatusResult::DescribeWebLockStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockStatusResult::~DescribeWebLockStatusResult()
{}

void DescribeWebLockStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["AuthCount"].isNull())
		authCount_ = std::stoi(value["AuthCount"].asString());
	if(!value["BindCount"].isNull())
		bindCount_ = std::stoi(value["BindCount"].asString());
	if(!value["ExpireTime"].isNull())
		expireTime_ = std::stol(value["ExpireTime"].asString());

}

int DescribeWebLockStatusResult::getBindCount()const
{
	return bindCount_;
}

long DescribeWebLockStatusResult::getExpireTime()const
{
	return expireTime_;
}

int DescribeWebLockStatusResult::getAuthCount()const
{
	return authCount_;
}

