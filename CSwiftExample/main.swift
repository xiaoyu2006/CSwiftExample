//
//  main.swift
//  CSwiftExample
//
//  Created by Nemo on 2020/7/20.
//  Copyright © 2020 Yi. All rights reserved.
//

import Foundation
import CPart

printHello()

let typeOfName: IDType = IDType(0)
let typeOfID: IDType = IDType(1)

let myName = "Yi"
var me = People(name: myName, ID: 0xffff)
printPeople(&me)

let nameMe = peopleToPeopleWithPartInfo(&me, typeOfName)
let IDMe = peopleToPeopleWithPartInfo(&me, typeOfID)
print(String(cString: nameMe!.pointee.name))
print(IDMe!.pointee.ID)

