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

#include <alibabacloud/dyplsapi/model/UnbindSubscriptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

UnbindSubscriptionResult::UnbindSubscriptionResult() :
	ServiceResult()
{}

UnbindSubscriptionResult::UnbindSubscriptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UnbindSubscriptionResult::~UnbindSubscriptionResult()
{}

void UnbindSubscriptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ChargeId"].isNull())
		chargeId_ = value["ChargeId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UnbindSubscriptionResult::getMessage()const
{
	return message_;
}

std::string UnbindSubscriptionResult::getChargeId()const
{
	return chargeId_;
}

std::string UnbindSubscriptionResult::getCode()const
{
	return code_;
}
