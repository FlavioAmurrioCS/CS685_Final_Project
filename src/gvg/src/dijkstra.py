#!/usr/bin/env python

# -*- coding: utf-8 -*-

import numpy as np

def get_lowest_g_node_from(open_list):
    lowest_node = open_list[0]
    for node in open_list:
        if node.g < lowest_node.g:
            lowest_node = node
    return lowest_node

def get_node(successor_ID, nodes):
    for node in nodes:
        if node.ID == successor_ID:
            return node
    return None

def dijkstra_algorithm(start, goal, nodes):
    open_list = []
    close_list = []
    node_current = start
    node_current.g = 0
    open_list.append(start)
    while len(open_list) > 0:
        node_current = get_lowest_g_node_from(open_list)
        if node_current.ID == goal.ID:
            break
        for successor_ID in node_current.neighbours:
            node_successor = get_node(successor_ID, nodes)
            successor_current_cost = node_current.g + 1
            if node_successor in open_list:
                if node_successor.g <= successor_current_cost:
                    continue
            elif node_successor in close_list:
                if node_successor.g <= successor_current_cost:
                    continue
                close_list.remove(node_successor)
                open_list.append(node_successor)
            else:
                open_list.append(node_successor)
            node_successor.g = successor_current_cost
            node_successor.parent = node_current

        open_list.remove(node_current)
        close_list.append(node_current)

    if node_current.ID != goal.ID:
        return None
    else:
        path = []
        while node_current is not None:
            path.append(node_current)
            node_current = node_current.parent
        return path
