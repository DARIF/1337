#!/bin/bash
ifconfig | grep "..:..:..:..:..:.." | cut -d " " -f 2
