package com.sumit.quizApp.repository;

import com.sumit.quizApp.model.Quiz;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import org.springframework.web.bind.annotation.RestController;

@Repository
public interface QuizDao extends JpaRepository<Quiz,Integer> {
}
