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

#ifndef ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT StartMPUTaskRequest : public RpcServiceRequest
			{
			public:
				struct UserPanes
				{
					int paneId;
					std::string userId;
					std::string sourceType;
				};

			public:
				StartMPUTaskRequest();
				~StartMPUTaskRequest();

				std::vector<UserPanes> getUserPanes()const;
				void setUserPanes(const std::vector<UserPanes>& userPanes);
				int getBackgroundColor()const;
				void setBackgroundColor(int backgroundColor);
				int getCropMode()const;
				void setCropMode(int cropMode);
				std::string getTaskProfile()const;
				void setTaskProfile(const std::string& taskProfile);
				std::vector<long> getLayoutIds()const;
				void setLayoutIds(const std::vector<long>& layoutIds);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getStreamURL()const;
				void setStreamURL(const std::string& streamURL);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getSubSpecUsers()const;
				void setSubSpecUsers(const std::vector<std::string>& subSpecUsers);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getMediaEncode()const;
				void setMediaEncode(int mediaEncode);
				std::string getChannelId()const;
				void setChannelId(const std::string& channelId);

            private:
				std::vector<UserPanes> userPanes_;
				int backgroundColor_;
				int cropMode_;
				std::string taskProfile_;
				std::vector<long> layoutIds_;
				std::string taskId_;
				std::string streamURL_;
				long ownerId_;
				std::vector<std::string> subSpecUsers_;
				std::string appId_;
				int mediaEncode_;
				std::string channelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_STARTMPUTASKREQUEST_H_