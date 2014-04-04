#ifndef __dispatch_private_h__
#define __dispatch_private_h__
/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

typedef struct qd_server_t    qd_server_t;
typedef struct qd_container_t qd_container_t;
typedef struct qd_router_t    qd_router_t;
typedef struct qd_agent_t     qd_agent_t;

#include <qpid/dispatch/container.h>
#include <qpid/dispatch/connection_manager.h>
#include "server_private.h"
#include "config_private.h"
#include "router_private.h"


struct qd_dispatch_t {
    qd_server_t             *server;
    qd_container_t          *container;
    qd_router_t             *router;
    qd_agent_t              *agent;
    qd_config_t             *config;
    qd_connection_manager_t *connection_manager;

    int               thread_count;
    const char       *container_name;
    const char       *router_area;
    const char       *router_id;
    qd_router_mode_t  router_mode;
};

#endif

