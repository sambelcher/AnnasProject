//
//  Message.swift
//  Anna
//
//  Created by Sam Belcher on 5/18/1398 AP.
//  Copyright © 1398 Sam Belcher. All rights reserved.
//

import Foundation

struct Message{
    
  //  var messageDate: Date?
    var message = ""
    var image = ""
    
    init(message: String, image: String){
//        self.messageDate = messageDate
        self.message = message
        self.image = image
    }
}
