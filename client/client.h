/*
 *  Copyright (c) 2016, https://github.com/zhatalk
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef	CLIENT_CLIENT_H_
#define	CLIENT_CLIENT_H_

#include <folly/io/async/EventBase.h>

#include "nebula/base/base_daemon.h"

class Client : public nebula::BaseDaemon {
public:
  Client() = default;
  ~Client() override = default;
  
protected:
  // From BaseDaemon
  // 不使用自动配置框架
  bool LoadConfig(const std::string& config_file) override {
    return true;
  }

  bool Initialize() override;
  bool Run() override;
  
  void DoCommandLineLoop();
  
};

#endif //

