package com.sumit.quiz_service.model;

import jakarta.persistence.Entity;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;


@Data
@NoArgsConstructor
@AllArgsConstructor
public class QuizDto {

    String categoryName;
    Integer numQuestions;
    String title;
}
